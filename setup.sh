therelease=CMSSW_7_4_7_patch1
# export SCRAM_ARCH=slc6_amd64_gcc530
mkdir -p common
if [ ! -d common/$therelease ]; then 
    cd common/ ;
    cmsrel $therelease;
    cd -
fi
cd common/$therelease/src
eval `scram ru -sh`
cd -

export LD_LIBRARY_PATH=$PWD/babymaking/batch/:$LD_LIBRARY_PATH

export PYTHONPATH=$PWD/analysis/bdt/xgboost/python-package/lib/python2.7/site-packages/:$PYTHONPATH
export PYTHONPATH=$PWD/analysis/bdt/xgboost/python-package/:$PYTHONPATH
export PYTHONPATH=$PWD/analysis/bdt/root_numpy-4.7.2/lib/python2.7/site-packages/:$PYTHONPATH

[[ -d babymaking/batch/NtupleTools/ ]] || git clone git@github.com:cmstas/NtupleTools.git babymaking/batch/NtupleTools/
[[ -d common/Software/ ]] || git clone git@github.com:cmstas/Software.git common/Software/
[[ -d common/CORE/ ]] || {
    git clone git@github.com:cmstas/CORE.git common/CORE/;
    cd common/CORE; make -j10 >&/dev/null &
    cd -;
}
[[ -d common/${therelease}/src/HiggsAnalysis/CombinedLimit/ ]] || {
    pushd
    cd $CMSSW_BASE/src
    cmsenv
    git clone https://github.com/cms-analysis/HiggsAnalysis-CombinedLimit.git HiggsAnalysis/CombinedLimit
    cd HiggsAnalysis/CombinedLimit
    git checkout 74x-root6
    scramv1 b vclean
    scramv1 b -j 15
    popd
}

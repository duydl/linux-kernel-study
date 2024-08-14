crosstool-ng: 
Build failed in step 'Retrieving needed toolchain components' tarballs'
https://github.com/crosstool-ng/crosstool-ng/issues/1625
-> update crosstool-ng to official repo 
-> checkout crosstool-ng-1.26.0
-> Build failed in step '(top-level)' // Error happened in: CT_DoExecLog[scripts/functions@376]
https://github.com/crosstool-ng/crosstool-ng/issues/1580
-> checkout crosstool-ng-1.24.0
-> Build failed in step 'Retrieving needed toolchain components' tarballs'. 
checkout master
export CT_BUILD_DIR=/home/ubuntu20_1/Projects_Ubuntu20/linux-kernel-study/out/crosstool-ng/build/default/build 
-> Building final gcc compiler
[ERROR]    collect2: error: ld returned 1 exit status
https://github.com/crosstool-ng/crosstool-ng/issues/1613
-> 
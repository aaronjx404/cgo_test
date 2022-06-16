## 本地环境准备
- go
- swig

## 说明
- testsdk.i 为 SWIG 接口文件
- 进入 testsdk.i 文件的目录，执行同目录下的 convert.sh 脚本，生成了以下文件
    1. test_sdk.go 供 go 调用接口的文件, package 定义取决于 testsdk.i 里的 module 命名
    2. testsdk_wrap.cxx 桥接库的 C++ 代码
    3. testsdk_wrap.h

## 运行

```
go run main.go
```

## Build
```
go build
```

## 踩坑
1. vscode go 插件工具的下载，需配置 go env -w GO111MODULE=on GOPROXY=https://goproxy.cn,direct, 
   - GO111MODULE 是个环境变量，可以在使用 Go 或者更改 Go 导入包的方式时候设置
   - GOPROXY=https://goproxy.cn 代理工具包下载，否则无法正常下载
2. window 缺少 gcc编译器，报错：C compiler "gcc" not found: exec: "gcc": executable file not found in %PATH%，需下载 [MinGW-w64 离线包](https://versaweb.dl.sourceforge.net/project/mingw-w64/Toolchains%20targetting%20Win64/Personal%20Builds/mingw-builds/8.1.0/threads-posix/seh/x86_64-8.1.0-release-posix-seh-rt_v6-rev0.7z)，在线包经常无法正常安装

## 参考资料
- [通过 swig 实现go调用c++程序](https://hongyanjiao.github.io/2018/11/11/%E9%80%9A%E8%BF%87swig%E5%AE%9E%E7%8E%B0go%E8%B0%83%E7%94%A8c++%E7%A8%8B%E5%BA%8F/)
- [windows gcc 遇到的问题解决](https://www.cnblogs.com/lonecloud/p/15468154.html)
package main

import (
	"cgotest/pack"
	"cgotest/test_sdk"
)

func main() {
	sdk := test_sdk.NewSwig()
	test_sdk.Swig.PrintHello(sdk)
	test_sdk.Swig.SetVector(sdk, 10)

	pack.Hello()
}

#pragma once

#include "pch.h"
#include "resource.h"

#if __has_include("codegen/NativeRnDeviceInfoCppDataTypes.g.h")
  #include "codegen/NativeRnDeviceInfoCppDataTypes.g.h"
#endif
#include "codegen/NativeRnDeviceInfoCppSpec.g.h"

#include "NativeModules.h"

namespace winrt::RNDeviceInfoCPP
{

REACT_MODULE(RnDeviceInfoCpp)
struct RnDeviceInfoCpp
{
  using ModuleSpec = RNDeviceInfoCPPCodegen::RnDeviceInfoCppSpec;

  REACT_INIT(Initialize)
  void Initialize(React::ReactContext const &reactContext) noexcept;

  REACT_SYNC_METHOD(multiply)
  double multiply(double a, double b) noexcept;

private:
  React::ReactContext m_context;
};

} // namespace winrt::RNDeviceInfoCPP
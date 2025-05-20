#pragma once

#include "pch.h"
#include "resource.h"

#if __has_include("codegen/NativeRNDeviceInfoCppDataTypes.g.h")
  #include "codegen/NativeRNDeviceInfoCppDataTypes.g.h"
#endif
#include "codegen/NativeRNDeviceInfoCppSpec.g.h"

#include "NativeModules.h"

namespace winrt::RNDeviceInfoCpp
{

REACT_MODULE(RNDeviceInfoCpp)
struct RNDeviceInfoCpp
{
  using ModuleSpec = RNDeviceInfoCppCodegen::RNDeviceInfoCppSpec;

  REACT_INIT(Initialize)
  void Initialize(React::ReactContext const &reactContext) noexcept;

private:
  React::ReactContext m_context;
};

} // namespace winrt::RNDeviceInfoCpp
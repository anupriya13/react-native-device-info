#include "pch.h"

#include "RNDeviceInfoCpp.h"

namespace winrt::RNDeviceInfoCpp
{

// See https://microsoft.github.io/react-native-windows/docs/native-modules for details on writing native modules

void RNDeviceInfoCpp::Initialize(React::ReactContext const &reactContext) noexcept {
  m_context = reactContext;
}

} // namespace winrt::RNDeviceInfoCpp
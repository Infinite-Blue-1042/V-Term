#include "precomp.h"

#include "../inc/conint.h"

using namespace VP-Corp::Console::Internal;

[[nodiscard]] HRESULT ProcessPolicy::CheckAppModelPolicy(const HANDLE /*hToken*/,
                                                         bool& fIsWrongWayBlocked) noexcept
{
    fIsWrongWayBlocked = false;
    return S_OK;
}

[[nodiscard]] HRESULT ProcessPolicy::CheckIntegrityLevelPolicy(const HANDLE /*hOtherToken*/,
                                                               bool& fIsWrongWayBlocked) noexcept
{
    fIsWrongWayBlocked = false;
    return S_OK;
}

void EdpPolicy::AuditClipboard(const std::wstring_view /*destinationName*/) noexcept
{
}

[[nodiscard]] HRESULT Theming::TrySetDarkMode(HWND /*hwnd*/) noexcept
{
    return S_FALSE;
}

[[nodiscard]] HRESULT DefaultApp::CheckDefaultAppPolicy(bool& isEnabled) noexcept
{
    isEnabled = false;
    return S_OK;
}

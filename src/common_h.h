#pragma once
#include <Windows.h>

// Include our local fixed StringUtil.h BEFORE Rainmeter headers
// to prevent the Rainmeter version from being included
#include "StringUtil.h"

#include "Plugins/API/RainmeterAPI.h"

#include <wrl.h>
#include <wrl/client.h>
#include <wil/com.h>
#include <map>
#include <string>
#include <vector>
#include <functional>

#include "WebView2.h"

#include "Library/Skin.h"
#include "Library/Meter.h"
#include "Library/Measure.h"

//
//  ATHelper.h
//  ATHelper
//
//  Created by allen huang on 2016/5/1.
//  Copyright © 2016年 AppTrek Studio. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <Foundation/Foundation.h>

//! Project version number for ATHelper.
FOUNDATION_EXPORT double ATHelperVersionNumber;

//! Project version string for ATHelper.
FOUNDATION_EXPORT const unsigned char ATHelperVersionString[];

// In this header, you should import all the public headers of your framework using statements like #import <ATHelper/PublicHeader.h>


// Macro
// Version
#define SYSTEM_VERSION_EQUAL_TO(v)                  ([[[UIDevice currentDevice] systemVersion] compare:v options:NSNumericSearch] == NSOrderedSame)
#define SYSTEM_VERSION_GREATER_THAN(v)              ([[[UIDevice currentDevice] systemVersion] compare:v options:NSNumericSearch] == NSOrderedDescending)
#define SYSTEM_VERSION_GREATER_THAN_OR_EQUAL_TO(v)  ([[[UIDevice currentDevice] systemVersion] compare:v options:NSNumericSearch] != NSOrderedAscending)
#define SYSTEM_VERSION_LESS_THAN(v)                 ([[[UIDevice currentDevice] systemVersion] compare:v options:NSNumericSearch] == NSOrderedAscending)
#define SYSTEM_VERSION_LESS_THAN_OR_EQUAL_TO(v)     ([[[UIDevice currentDevice] systemVersion] compare:v options:NSNumericSearch] != NSOrderedDescending)

#define APP_VERSION [[NSBundle mainBundle] objectForInfoDictionaryKey:@"CFBundleShortVersionString"]
#define APP_BUILD   [[NSBundle mainBundle] objectForInfoDictionaryKey:@"CFBundleVersion"]

// UIColor
#define UIColorFromRGB(rgbHexValue) [UIColor colorWithRed:((float)((rgbHexValue & 0xFF0000) >> 16))/255.0 green:((float)((rgbHexValue & 0xFF00) >> 8))/255.0 blue:((float)(rgbHexValue & 0xFF))/255.0 alpha:1.0]

#define UIColorFromRGBA(rgbHexValue, alphaValue) [UIColor colorWithRed:((float)((rgbHexValue & 0xFF0000) >> 16))/255.0 green:((float)((rgbHexValue & 0xFF00) >> 8))/255.0 blue:((float)(rgbHexValue & 0xFF))/255.0 alpha:alphaValue]

// Log

#define ATLogCheckPoint \
DDLogInfo(@"%@",[NSString stringWithUTF8String:__PRETTY_FUNCTION__]);

#define ATLogCheckPointMoreInfo(...) \
DDLogInfo(@"%@",[NSString stringWithFormat:@"%s %@",__PRETTY_FUNCTION__,__VA_ARGS__]);

#define ATLogCritical(...)                                                              \
RKlcl_log(RKLogComponent, RKlcl_vCritical, @"" __VA_ARGS__)

#define ATLogError(...)                                                                 \
RKlcl_log(RKLogComponent, RKlcl_vError, @"" __VA_ARGS__)

#define ATLogWarning(...)                                                               \
RKlcl_log(RKLogComponent, RKlcl_vWarning, @"" __VA_ARGS__)

#define ATLogInfo(...)                                                                  \
RKlcl_log(RKLogComponent, RKlcl_vInfo, @"" __VA_ARGS__)

#define ATLogDebug(...)                                                                 \
RKlcl_log(RKLogComponent, RKlcl_vDebug, @"" __VA_ARGS__)

#define ATLogTrace(...)                                                                 \
RKlcl_log(RKLogComponent, RKlcl_vTrace, @"" __VA_ARGS__)



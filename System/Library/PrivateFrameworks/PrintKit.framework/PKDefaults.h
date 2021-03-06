/*
* This header is generated by classdump-dyld 1.0
* on Monday, September 7, 2020 at 2:36:47 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/PrintKit.framework/PrintKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <PrintKit/PrintKit-Structs.h>
@interface PKDefaults : NSObject
+(id)lastUsedPrinters;
+(id)lastUsedPrintersForPhoto:(BOOL)arg1 ;
+(void)addLastUsedPrinter:(id)arg1 duplexMode:(id)arg2 lastUsedSize:(CGSize)arg3 forPhoto:(BOOL)arg4 ;
+(void)addLastUsedPrinter:(id)arg1 duplexMode:(id)arg2 lastUsedSize:(CGSize)arg3 ;
+(long long)printerLookupWithArray:(id)arg1 withTimeout:(double)arg2 completionHandler:(/*^block*/id)arg3 ;
@end


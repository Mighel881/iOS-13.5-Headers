/*
* This header is generated by classdump-dyld 1.0
* on Monday, September 7, 2020 at 2:35:16 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/SIMToolkitUI.framework/SIMToolkitUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/STKAlertSessionResponseProvider.h>

@protocol OS_os_log;
@class NSObject, NSString;

@interface _STKClass0SMSResponseProvider : NSObject <STKAlertSessionResponseProvider> {

	NSObject*<OS_os_log> _logger;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) NSObject*<OS_os_log> logger; 
@property (nonatomic,readonly) BOOL hasSentResponse; 
-(NSObject*<OS_os_log>)logger;
-(void)sendResponse:(long long)arg1 ;
-(id)initWithLogger:(id)arg1 ;
-(void)sendResponse:(long long)arg1 withStringResult:(id)arg2 ;
-(BOOL)hasSentResponse;
@end


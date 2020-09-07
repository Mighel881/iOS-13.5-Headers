/*
* This header is generated by classdump-dyld 1.0
* on Monday, September 7, 2020 at 2:35:16 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/SIMToolkitUI.framework/SIMToolkitUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SIMToolkitUI/SIMToolkitUI-Structs.h>
#import <libobjc.A.dylib/STKAlertSessionResponseProvider.h>

@protocol OS_dispatch_queue, OS_os_log;
@class NSObject, NSDictionary, NSString;

@interface _STKUSSDResponseProvider : NSObject <STKAlertSessionResponseProvider> {

	NSObject*<OS_dispatch_queue> _queue;
	CTServerConnectionRef _connection;
	NSDictionary* _options;
	BOOL _hasSentResponse;
	NSObject*<OS_os_log> _logger;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) NSObject*<OS_os_log> logger; 
@property (nonatomic,readonly) BOOL hasSentResponse; 
-(void)dealloc;
-(NSObject*<OS_os_log>)logger;
-(void)sendResponse:(long long)arg1 ;
-(void)sendResponse:(long long)arg1 withStringResult:(id)arg2 ;
-(BOOL)hasSentResponse;
-(id)initWithQueue:(id)arg1 connection:(CTServerConnectionRef)arg2 options:(id)arg3 logger:(id)arg4 ;
@end

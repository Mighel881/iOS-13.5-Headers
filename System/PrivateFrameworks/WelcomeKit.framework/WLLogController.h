/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:57:47 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/WelcomeKit.framework/WelcomeKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface WLLogController : NSObject {

	BOOL _loggingEnabled;

}
+(id)sharedLogger;
-(id)init;
-(BOOL)_loggingEnabled;
-(void)_reloadLogPreferences;
-(void)logMessageFromAddress:(void*)arg1 withLevel:(unsigned long long)arg2 format:(id)arg3 args:(char*)arg4 ;
@end


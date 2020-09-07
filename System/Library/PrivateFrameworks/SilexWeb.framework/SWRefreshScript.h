/*
* This header is generated by classdump-dyld 1.0
* on Monday, September 7, 2020 at 2:56:05 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/SilexWeb.framework/SilexWeb
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/SWScript.h>

@class WKUserScript, NSString;

@interface SWRefreshScript : NSObject <SWScript> {

	WKUserScript* userScript;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) NSString * identifier; 
@property (nonatomic,readonly) WKUserScript * userScript; 
@property (nonatomic,readonly) NSString * executableScript; 
@property (nonatomic,readonly) BOOL queueable; 
-(NSString *)identifier;
-(WKUserScript *)userScript;
-(NSString *)executableScript;
-(BOOL)queueable;
@end

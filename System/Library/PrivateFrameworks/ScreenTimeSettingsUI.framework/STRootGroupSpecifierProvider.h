/*
* This header is generated by classdump-dyld 1.0
* on Monday, September 7, 2020 at 2:56:04 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/ScreenTimeSettingsUI.framework/ScreenTimeSettingsUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ScreenTimeSettingsUI/STGroupSpecifierProvider.h>

@protocol STRootViewModelCoordinator;
@class NSObject;

@interface STRootGroupSpecifierProvider : STGroupSpecifierProvider {

	NSObject*<STRootViewModelCoordinator> _coordinator;

}

@property (retain) NSObject*<STRootViewModelCoordinator> coordinator;              //@synthesize coordinator=_coordinator - In the implementation block
+(id)providerWithCoordinator:(id)arg1 ;
-(void)invalidate;
-(void)setCoordinator:(NSObject*<STRootViewModelCoordinator>)arg1 ;
-(NSObject*<STRootViewModelCoordinator>)coordinator;
@end


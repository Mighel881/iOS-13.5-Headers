/*
* This header is generated by classdump-dyld 1.0
* on Monday, September 7, 2020 at 2:36:27 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Home/HFItem.h>

@class HFLocationTriggerBuilder;

@interface HULocationTriggerSelectedLocationItem : HFItem {

	HFLocationTriggerBuilder* _triggerBuilder;

}

@property (nonatomic,readonly) HFLocationTriggerBuilder * triggerBuilder;              //@synthesize triggerBuilder=_triggerBuilder - In the implementation block
@property (nonatomic,readonly) BOOL locationCanBeEdited; 
-(id)init;
-(id)_locationTitle;
-(id)_subclass_updateWithOptions:(id)arg1 ;
-(BOOL)locationCanBeEdited;
-(HFLocationTriggerBuilder *)triggerBuilder;
-(id)initWithTriggerBuilder:(id)arg1 ;
-(BOOL)_locationIsHome;
@end

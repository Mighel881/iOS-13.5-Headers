/*
* This header is generated by classdump-dyld 1.0
* on Monday, September 7, 2020 at 2:29:56 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKitCore/UIKitCore-Structs.h>
#import <UIKitCore/_UIStatusBarItem.h>

@class _UIStatusBarActivityIndicator;

@interface _UIStatusBarActivityItem : _UIStatusBarItem {

	_UIStatusBarActivityIndicator* _activityIndicator;

}

@property (nonatomic,retain) _UIStatusBarActivityIndicator * activityIndicator;                //@synthesize activityIndicator=_activityIndicator - In the implementation block
@property (nonatomic,readonly) UIEdgeInsets activityIndicatorAlignmentRectInsets; 
-(id)applyUpdate:(id)arg1 toDisplayItem:(id)arg2 ;
-(id)viewForIdentifier:(id)arg1 ;
-(_UIStatusBarActivityIndicator *)activityIndicator;
-(void)setActivityIndicator:(_UIStatusBarActivityIndicator *)arg1 ;
-(void)_create_activityIndicator;
-(UIEdgeInsets)activityIndicatorAlignmentRectInsets;
-(BOOL)_enableForType:(long long)arg1 ;
-(id)dependentEntryKeys;
@end


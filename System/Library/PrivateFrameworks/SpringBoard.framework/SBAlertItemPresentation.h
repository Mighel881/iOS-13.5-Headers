/*
* This header is generated by classdump-dyld 1.0
* on Monday, September 7, 2020 at 2:56:09 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol SBAlertItemPresenter;
@class SBAlertItem;

@interface SBAlertItemPresentation : NSObject {

	SBAlertItem* _alertItem;
	id<SBAlertItemPresenter> _presenter;

}

@property (nonatomic,retain) SBAlertItem * alertItem;                         //@synthesize alertItem=_alertItem - In the implementation block
@property (nonatomic,retain) id<SBAlertItemPresenter> presenter;              //@synthesize presenter=_presenter - In the implementation block
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)succinctDescription;
-(id)descriptionWithMultilinePrefix:(id)arg1 ;
-(id)succinctDescriptionBuilder;
-(id)descriptionBuilderWithMultilinePrefix:(id)arg1 ;
-(id<SBAlertItemPresenter>)presenter;
-(SBAlertItem *)alertItem;
-(void)setAlertItem:(SBAlertItem *)arg1 ;
-(void)setPresenter:(id<SBAlertItemPresenter>)arg1 ;
-(id)initWithAlertItem:(id)arg1 presenter:(id)arg2 ;
@end

/*
* This header is generated by classdump-dyld 1.0
* on Monday, September 7, 2020 at 2:36:10 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/ConversationKit.framework/ConversationKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKitCore/UITableViewCell.h>

@class _TtC15ConversationKit19InCallControlButton;

@interface ConversationKit.InCallControlsParticipantTableViewCell : UITableViewCell {

	 nameLabel;
	 subtitleLabel;
	 cameraIcon;
	 avatarView;
	 ringButton;
	 callDelegate;
	 delegate;

}

@property (readonly,nonatomic) _TtC15ConversationKit19InCallControlButton * ringButton; 
-(id)initWithCoder:(id)arg1 ;
-(void)layoutSubviews;
-(id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2 ;
-(void)didTapRing:(id)arg1 ;
-(_TtC15ConversationKit19InCallControlButton *)ringButton;
@end

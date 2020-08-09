/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:38:28 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <UIKitCore/UIKitCore-Structs.h>
@class UIView, NSString;

@interface UICellAccessory : NSObject {

	UIView* _view;
	BOOL _alwaysNeedsLayout;
	NSString* _identifier;

}

@property (nonatomic,readonly) BOOL alwaysNeedsLayout;                       //@synthesize alwaysNeedsLayout=_alwaysNeedsLayout - In the implementation block
@property (nonatomic,copy) NSString * identifier;                            //@synthesize identifier=_identifier - In the implementation block
@property (nonatomic,readonly) UIView * view;                                //@synthesize view=_view - In the implementation block
@property (nonatomic,readonly) BOOL requestsHuggingLayoutWidth; 
+(id)accessoryWithIdentifier:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(id)description;
-(NSString *)identifier;
-(void)setIdentifier:(NSString *)arg1 ;
-(UIView *)view;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(BOOL)requestsHuggingLayoutWidth;
-(BOOL)alwaysNeedsLayout;
@end

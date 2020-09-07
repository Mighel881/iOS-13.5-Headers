/*
* This header is generated by classdump-dyld 1.0
* on Monday, September 7, 2020 at 2:35:08 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/UserNotificationsUIKit.framework/UserNotificationsUIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString;

@interface _NCActionButtonDescription : NSObject {

	NSString* _selectorString;
	BOOL _defaultActionButton;
	NSString* _title;

}

@property (nonatomic,copy,readonly) NSString * title;                                              //@synthesize title=_title - In the implementation block
@property (nonatomic,readonly) SEL selector; 
@property (getter=isDefaultActionButton,nonatomic,readonly) BOOL defaultActionButton;              //@synthesize defaultActionButton=_defaultActionButton - In the implementation block
-(SEL)selector;
-(NSString *)title;
-(id)initWithTitle:(id)arg1 selector:(SEL)arg2 defaultActionButton:(BOOL)arg3 ;
-(BOOL)isDefaultActionButton;
@end

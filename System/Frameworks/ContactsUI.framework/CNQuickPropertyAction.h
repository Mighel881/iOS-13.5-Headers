/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:40:58 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/Frameworks/ContactsUI.framework/ContactsUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ContactsUI/CNQuickContactAction.h>

@class CNPropertyAction;

@interface CNQuickPropertyAction : CNQuickContactAction

@property (nonatomic,readonly) CNPropertyAction * propertyAction; 
-(BOOL)enabled;
-(id)identifier;
-(unsigned long long)score;
-(id)_coreDuetValue;
-(id)titleForContext:(long long)arg1 ;
-(id)subtitleForContext:(long long)arg1 ;
-(void)performWithCompletionBlock:(/*^block*/id)arg1 ;
-(CNPropertyAction *)propertyAction;
-(id)initWithPropertyAction:(id)arg1 ;
-(id)propertyItem;
@end


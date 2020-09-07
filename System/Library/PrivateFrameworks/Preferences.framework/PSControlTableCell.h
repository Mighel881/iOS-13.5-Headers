/*
* This header is generated by classdump-dyld 1.0
* on Monday, September 7, 2020 at 2:30:48 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/Preferences.framework/Preferences
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Preferences/PSTableCell.h>

@class UIControl;

@interface PSControlTableCell : PSTableCell {

	UIControl* _control;

}

@property (nonatomic,retain) UIControl * control; 
-(void)dealloc;
-(id)valueLabel;
-(void)setControl:(UIControl *)arg1 ;
-(UIControl *)control;
-(id)controlValue;
-(id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2 specifier:(id)arg3 ;
-(void)refreshCellContentsWithSpecifier:(id)arg1 ;
-(BOOL)canReload;
-(id)newControl;
-(void)controlChanged:(id)arg1 ;
@end

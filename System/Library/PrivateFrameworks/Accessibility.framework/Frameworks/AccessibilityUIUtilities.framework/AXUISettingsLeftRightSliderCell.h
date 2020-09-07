/*
* This header is generated by classdump-dyld 1.0
* on Monday, September 7, 2020 at 2:31:04 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/Accessibility.framework/Frameworks/AccessibilityUIUtilities.framework/AccessibilityUIUtilities
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Preferences/PSSliderTableCell.h>

@class UILabel;

@interface AXUISettingsLeftRightSliderCell : PSSliderTableCell {

	UILabel* _leftLabel;
	UILabel* _rightLabel;

}
-(id)labelColor;
-(void)setAccessibilityLabel:(id)arg1 ;
-(id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2 specifier:(id)arg3 ;
-(id)newControl;
-(BOOL)_accessibilityIgnoreInternalLabels;
@end

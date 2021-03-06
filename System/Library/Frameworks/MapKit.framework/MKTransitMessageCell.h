/*
* This header is generated by classdump-dyld 1.0
* on Monday, September 7, 2020 at 2:31:42 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/Frameworks/MapKit.framework/MapKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MapKit/MKCustomSeparatorTableViewCell.h>

@class _MKUILabel, NSLayoutConstraint, NSString;

@interface MKTransitMessageCell : MKCustomSeparatorTableViewCell {

	_MKUILabel* _messageLabel;
	NSLayoutConstraint* _topConstraint;
	NSLayoutConstraint* _bottomConstraint;

}

@property (nonatomic,copy) NSString * messageText; 
-(void)dealloc;
-(id)initWithReuseIdentifier:(id)arg1 ;
-(void)setMessageText:(NSString *)arg1 ;
-(NSString *)messageText;
-(void)_contentSizeCategoryDidChange;
-(void)_updateConstraintValues;
@end


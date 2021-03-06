/*
* This header is generated by classdump-dyld 1.0
* on Monday, September 7, 2020 at 2:36:54 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/SpeechRecognitionCommandAndControl.framework/SpeechRecognitionCommandAndControl
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

@class NSString;


@protocol CACNumberedElement <CACVoiceOverDescribable>
@property (assign,nonatomic) CGRect labelRectangle; 
@property (nonatomic,readonly) CGRect interfaceOrientedRectangle; 
@property (nonatomic,readonly) NSString * label; 
@property (nonatomic,retain) NSString * numberedLabel; 
@property (assign,nonatomic) long long arrowOrientation; 
@property (assign,nonatomic) long long badgePresentation; 
@required
-(NSString *)label;
-(NSString *)numberedLabel;
-(CGRect)interfaceOrientedRectangle;
-(void)setNumberedLabel:(id)arg1;
-(CGRect)labelRectangle;
-(void)setLabelRectangle:(CGRect)arg1;
-(long long)arrowOrientation;
-(void)setArrowOrientation:(long long)arg1;
-(long long)badgePresentation;
-(void)setBadgePresentation:(long long)arg1;

@end


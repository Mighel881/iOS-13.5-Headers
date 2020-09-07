/*
* This header is generated by classdump-dyld 1.0
* on Monday, September 7, 2020 at 2:33:39 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/WorkflowKit.framework/WorkflowKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <WorkflowKit/WFParameter.h>

@class NSDate;

@interface WFDatePickerParameter : WFParameter {

	long long _datePickerMode;
	NSDate* _minimumDate;
	NSDate* _maximumDate;

}

@property (assign,nonatomic) long long datePickerMode;              //@synthesize datePickerMode=_datePickerMode - In the implementation block
@property (nonatomic,retain) NSDate * minimumDate;                  //@synthesize minimumDate=_minimumDate - In the implementation block
@property (nonatomic,retain) NSDate * maximumDate;                  //@synthesize maximumDate=_maximumDate - In the implementation block
-(id)initWithDefinition:(id)arg1 ;
-(void)setDatePickerMode:(long long)arg1 ;
-(void)setMinimumDate:(NSDate *)arg1 ;
-(void)setMaximumDate:(NSDate *)arg1 ;
-(long long)datePickerMode;
-(NSDate *)minimumDate;
-(NSDate *)maximumDate;
-(Class)singleStateClass;
-(id)defaultSupportedVariableTypes;
@end

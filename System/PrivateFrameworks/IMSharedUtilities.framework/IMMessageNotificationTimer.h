/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:39:53 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/IMSharedUtilities.framework/IMSharedUtilities
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSDate, NSNumber;

@interface IMMessageNotificationTimer : NSObject {

	NSDate* _date;
	NSNumber* _numberDingsLeft;

}

@property (nonatomic,retain) NSDate * date;                             //@synthesize date=_date - In the implementation block
@property (nonatomic,readonly) NSNumber * numberDingsLeft;              //@synthesize numberDingsLeft=_numberDingsLeft - In the implementation block
@property (nonatomic,readonly) BOOL areDingsRemaining; 
-(void)dealloc;
-(NSDate *)date;
-(id)initWithDate:(id)arg1 ;
-(void)setDate:(NSDate *)arg1 ;
-(BOOL)areDingsRemaining;
-(void)reduceNumberDingsLeft;
-(NSNumber *)numberDingsLeft;
@end


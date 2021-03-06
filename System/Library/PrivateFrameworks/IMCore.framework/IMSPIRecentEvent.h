/*
* This header is generated by classdump-dyld 1.0
* on Monday, September 7, 2020 at 2:32:32 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/IMCore.framework/IMCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString, NSDate;

@interface IMSPIRecentEvent : NSObject {

	NSString* _handle;
	NSDate* _date;
	NSString* _labelID;

}

@property (retain) NSString * handle;               //@synthesize handle=_handle - In the implementation block
@property (retain) NSString * labelID;              //@synthesize labelID=_labelID - In the implementation block
@property (retain) NSDate * date;                   //@synthesize date=_date - In the implementation block
-(id)description;
-(NSDate *)date;
-(NSString *)handle;
-(void)setDate:(NSDate *)arg1 ;
-(void)setHandle:(NSString *)arg1 ;
-(NSString *)labelID;
-(void)setLabelID:(NSString *)arg1 ;
-(id)initWithHandle:(id)arg1 date:(id)arg2 ;
-(id)initWithLabelID:(id)arg1 date:(id)arg2 ;
@end


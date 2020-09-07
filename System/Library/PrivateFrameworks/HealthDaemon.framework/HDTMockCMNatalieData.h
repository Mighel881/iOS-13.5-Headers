/*
* This header is generated by classdump-dyld 1.0
* on Monday, September 7, 2020 at 2:35:21 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <HealthDaemon/HealthDaemon-Structs.h>
#import <CoreMotion/CMNatalieData.h>

@class NSDate, NSUUID;

@interface HDTMockCMNatalieData : CMNatalieData {

	NSDate* _date;
	double _mets;
	double _active;
	double _basal;
	long long _recordID;
	NSUUID* _source;

}
+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)startDate;
-(id)endDate;
-(id)sourceId;
-(long long)recordId;
-(id)mets;
-(id)natalies;
-(id)basalNatalies;
-(id)initWithTimestamp:(double)arg1 mets:(double)arg2 active:(double)arg3 basal:(double)arg4 recordID:(long long)arg5 source:(id)arg6 ;
@end

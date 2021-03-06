/*
* This header is generated by classdump-dyld 1.0
* on Monday, September 7, 2020 at 2:33:02 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/MapsSupport.framework/MapsSupport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/MSPHistoryReplicaMergeOptions.h>
@class NSDate;


@protocol MSPHistoryReplicaMergeOptions <MSPReplicaMergeOptions>
@property (readonly) NSDate * earliestKnownSyncDate; 
@property (readonly) long long modificationDatePolicy; 
@required
-(id)initWithEarliestKnownSyncDate:(id)arg1 modificationDatePolicy:(long long)arg2;
-(NSDate *)earliestKnownSyncDate;
-(long long)modificationDatePolicy;

@end


@class NSDate, NSString;

@interface MSPHistoryReplicaMergeOptions : NSObject <MSPHistoryReplicaMergeOptions> {

	NSDate* _earliestKnownSyncDate;
	long long _modificationDatePolicy;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (readonly) NSDate * earliestKnownSyncDate;                //@synthesize earliestKnownSyncDate=_earliestKnownSyncDate - In the implementation block
@property (readonly) long long modificationDatePolicy;              //@synthesize modificationDatePolicy=_modificationDatePolicy - In the implementation block
-(id)initWithEarliestKnownSyncDate:(id)arg1 modificationDatePolicy:(long long)arg2 ;
-(NSDate *)earliestKnownSyncDate;
-(long long)modificationDatePolicy;
@end


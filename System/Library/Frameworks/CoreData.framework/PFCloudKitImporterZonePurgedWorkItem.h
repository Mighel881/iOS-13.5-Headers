/*
* This header is generated by classdump-dyld 1.0
* on Monday, September 7, 2020 at 2:30:06 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/Frameworks/CoreData.framework/CoreData
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreData/PFCloudKitImporterWorkItem.h>

@class CKRecordZoneID;

@interface PFCloudKitImporterZonePurgedWorkItem : PFCloudKitImporterWorkItem {

	CKRecordZoneID* _purgedRecordZoneID;

}

@property (nonatomic,readonly) CKRecordZoneID * purgedRecordZoneID;              //@synthesize purgedRecordZoneID=_purgedRecordZoneID - In the implementation block
-(void)dealloc;
-(id)description;
-(void)doWorkWithCompletion:(/*^block*/id)arg1 ;
-(id)initWithPurgedRecordZoneID:(id)arg1 options:(id)arg2 request:(id)arg3 ;
-(BOOL)wipeAllCloudDataAndPurgeHistoryToken:(BOOL)arg1 error:(id*)arg2 ;
-(CKRecordZoneID *)purgedRecordZoneID;
@end


/*
* This header is generated by classdump-dyld 1.0
* on Monday, September 7, 2020 at 2:56:14 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/Frameworks/KeynoteQuicklook.framework/KeynoteQuicklook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <KeynoteQuicklook/KeynoteQuicklook-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSUUID;

@interface KNRecordingSyncState : NSObject <NSCopying> {

	NSUUID* _outOfSyncToken;
	BOOL _canClearOutOfSyncToken;

}

@property (nonatomic,readonly) NSUUID * outOfSyncToken;                                          //@synthesize outOfSyncToken=_outOfSyncToken - In the implementation block
@property (getter=isRecordingOutOfSync,nonatomic,readonly) BOOL recordingOutOfSync; 
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)saveToArchive:(RecordingSyncState*)arg1 archiver:(id)arg2 ;
-(id)initWithOutOfSyncToken:(id)arg1 canClearOutOfSyncToken:(BOOL)arg2 ;
-(BOOL)isRecordingOutOfSync;
-(BOOL)isRecordingLocallyOutOfSyncUsingLocalOutOfSyncToken:(id)arg1 ;
-(id)recordingSyncStateByMarkingRecordingAsOutOfSync:(BOOL)arg1 withLocalOutOfSyncToken:(id)arg2 ;
-(NSUUID *)outOfSyncToken;
-(id)initWithArchive:(const RecordingSyncState*)arg1 unarchiver:(id)arg2 ;
@end


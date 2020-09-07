/*
* This header is generated by classdump-dyld 1.0
* on Monday, September 7, 2020 at 2:30:34 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/Frameworks/Contacts.framework/Contacts
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreFoundation/NSEnumerator.h>

@protocol CNEnumeratorRefillStrategy;
@class CNQueue;

@interface CNChangeHistoryResultEnumerator : NSEnumerator {

	CNQueue* _changes;
	CNQueue* _batchFetchQueue;
	id<CNEnumeratorRefillStrategy> _refillStrategy;

}

@property (nonatomic,copy,readonly) CNQueue * changes;                                     //@synthesize changes=_changes - In the implementation block
@property (nonatomic,readonly) CNQueue * batchFetchQueue;                                  //@synthesize batchFetchQueue=_batchFetchQueue - In the implementation block
@property (nonatomic,readonly) id<CNEnumeratorRefillStrategy> refillStrategy;              //@synthesize refillStrategy=_refillStrategy - In the implementation block
+(id)contactEnumeratorWithChanges:(id)arg1 keysToFetch:(id)arg2 unifyResults:(BOOL)arg3 contactStore:(id)arg4 ;
+(id)groupEnumeratorWithChanges:(id)arg1 contactStore:(id)arg2 ;
-(id)nextObject;
-(CNQueue *)changes;
-(id)initWithChanges:(id)arg1 refillStrategy:(id)arg2 ;
-(void)_fetchNextBatch;
-(CNQueue *)batchFetchQueue;
-(id<CNEnumeratorRefillStrategy>)refillStrategy;
@end

/*
* This header is generated by classdump-dyld 1.0
* on Monday, September 7, 2020 at 2:35:27 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/ClassroomKit.framework/ClassroomKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreFoundation/NSEnumerator.h>

@class NSEnumerator;

@interface CRKFilteredEnumerator : NSEnumerator {

	NSEnumerator* _enumerator;
	/*^block*/id _filterBlock;

}

@property (nonatomic,readonly) NSEnumerator * enumerator;              //@synthesize enumerator=_enumerator - In the implementation block
@property (nonatomic,readonly) id filterBlock;                         //@synthesize filterBlock=_filterBlock - In the implementation block
-(id)nextObject;
-(NSEnumerator *)enumerator;
-(id)filterBlock;
-(BOOL)shouldRejectItem:(id)arg1 ;
-(id)initWithEnumerator:(id)arg1 filterBlock:(/*^block*/id)arg2 ;
@end

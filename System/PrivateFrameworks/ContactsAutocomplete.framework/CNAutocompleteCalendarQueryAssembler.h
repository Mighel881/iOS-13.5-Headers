/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:50:14 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/ContactsAutocomplete.framework/ContactsAutocomplete
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class CNObservable;

@interface CNAutocompleteCalendarQueryAssembler : NSObject {

	CNObservable* _cachedObservable;
	CNObservable* _uncachedObservable;
	CNObservable* _rawCachedObservable;
	CNObservable* _rawUncachedObservable;

}

@property (readonly) CNObservable * rawCachedObservable;                //@synthesize rawCachedObservable=_rawCachedObservable - In the implementation block
@property (readonly) CNObservable * rawUncachedObservable;              //@synthesize rawUncachedObservable=_rawUncachedObservable - In the implementation block
@property (readonly) CNObservable * cachedObservable;                   //@synthesize cachedObservable=_cachedObservable - In the implementation block
@property (readonly) CNObservable * uncachedObservable;                 //@synthesize uncachedObservable=_uncachedObservable - In the implementation block
-(id)description;
-(CNObservable *)rawCachedObservable;
-(CNObservable *)rawUncachedObservable;
-(id)initWithRawCachedObservable:(id)arg1 rawUncachedObservable:(id)arg2 ;
-(void)assemble;
-(CNObservable *)cachedObservable;
-(CNObservable *)uncachedObservable;
@end


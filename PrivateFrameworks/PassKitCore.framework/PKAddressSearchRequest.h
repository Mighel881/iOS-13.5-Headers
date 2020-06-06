/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:44:23 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSArray, NSString, NSPredicate;

@interface PKAddressSearchRequest : NSObject {

	NSArray* _keysToFetch;
	/*^block*/id _contactFilter;
	NSString* _outputKey;
	long long _type;
	NSString* _fragment;
	NSPredicate* _predicate;

}

@property (assign,nonatomic) long long type;                       //@synthesize type=_type - In the implementation block
@property (nonatomic,copy) NSString * fragment;                    //@synthesize fragment=_fragment - In the implementation block
@property (nonatomic,retain) NSPredicate * predicate;              //@synthesize predicate=_predicate - In the implementation block
@property (nonatomic,retain) NSArray * keysToFetch;                //@synthesize keysToFetch=_keysToFetch - In the implementation block
@property (nonatomic,copy) id contactFilter;                       //@synthesize contactFilter=_contactFilter - In the implementation block
@property (nonatomic,retain) NSString * outputKey;                 //@synthesize outputKey=_outputKey - In the implementation block
-(id)allKeys;
-(long long)type;
-(void)setType:(long long)arg1 ;
-(NSString *)fragment;
-(void)setPredicate:(NSPredicate *)arg1 ;
-(NSPredicate *)predicate;
-(void)setFragment:(NSString *)arg1 ;
-(id)initWithEmailAddress:(id)arg1 ;
-(id)initWithPhoneNumber:(id)arg1 ;
-(id)initWithPostalAddress:(id)arg1 ;
-(NSArray *)keysToFetch;
-(void)setKeysToFetch:(NSArray *)arg1 ;
-(id)contactKeys;
-(/*^block*/id)_contactPropertyFilterForKey:(id)arg1 propertyName:(id)arg2 ;
-(id)postalAddressKeys;
-(id)initWithFullText:(id)arg1 ;
-(id)initWithNameComponents:(id)arg1 ;
-(id)contactFilter;
-(void)setContactFilter:(id)arg1 ;
-(NSString *)outputKey;
-(void)setOutputKey:(NSString *)arg1 ;
@end

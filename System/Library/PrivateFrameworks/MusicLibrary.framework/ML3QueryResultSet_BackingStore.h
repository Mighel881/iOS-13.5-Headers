/*
* This header is generated by classdump-dyld 1.0
* on Monday, September 7, 2020 at 2:32:59 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/MusicLibrary.framework/MusicLibrary
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <MusicLibrary/MusicLibrary-Structs.h>
@interface ML3QueryResultSet_BackingStore : NSObject {

	vector<long long, std::__1::allocator<long long> >* _persistentIDs;
	vector<unsigned char, std::__1::allocator<unsigned char> > _sections;

}

@property (nonatomic,readonly) unsigned long long count; 
-(unsigned long long)count;
-(void)enumerateSectionsUsingBlock:(/*^block*/id)arg1 ;
-(void)enumeratePersistentIDsUsingBlock:(/*^block*/id)arg1 ;
-(long long)persistentIDAtIndex:(unsigned long long)arg1 ;
-(void)reverseEnumeratePersistentIDsUsingBlock:(/*^block*/id)arg1 ;
-(BOOL)containsPersistentIDs:(const unordered_set<long long, std::__1::hash<long long>, std::__1::equal_to<long long>, std::__1::allocator<long long> >*)arg1 ;
-(void)reverseEnumerateSectionsUsingBlock:(/*^block*/id)arg1 ;
-(id)backingStoreByRemovingPersistentIDs:(const unordered_set<long long, std::__1::hash<long long>, std::__1::equal_to<long long>, std::__1::allocator<long long> >*)arg1 ;
@end

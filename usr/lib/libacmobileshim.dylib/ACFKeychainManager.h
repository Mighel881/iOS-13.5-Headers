/*
* This header is generated by classdump-dyld 1.0
* on Monday, September 7, 2020 at 2:37:20 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /usr/lib/libacmobileshim.dylib
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/ACFKeychainManagerProtocol.h>

@class NSString;

@interface ACFKeychainManager : NSObject <ACFKeychainManagerProtocol> {

	NSString* _usedAccessGroup;

}

@property (nonatomic,retain) NSString * usedAccessGroup;                  //@synthesize usedAccessGroup=_usedAccessGroup - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) NSString * obtainAccessGroup; 
@property (nonatomic,readonly) NSString * sharedAccessGroup; 
-(NSString *)sharedAccessGroup;
-(id)universalAccessGroup;
-(int)secAddItemWithAttributes:(id)arg1 result:(id*)arg2 ;
-(NSString *)obtainAccessGroup;
-(void)setUsedAccessGroup:(NSString *)arg1 ;
-(void)dumpResults:(id)arg1 printAttributes:(BOOL)arg2 ;
-(id)searchItemWithInfo:(id)arg1 ;
-(void)dumpResults:(id)arg1 ;
-(int)secItemCopyMatchingWithAttributes:(id)arg1 result:(id*)arg2 ;
-(int)storeItemWithInfo:(id)arg1 share:(BOOL)arg2 result:(id*)arg3 ;
-(BOOL)removeItemWithInfo:(id)arg1 ;
-(NSString *)usedAccessGroup;
@end


/*
* This header is generated by classdump-dyld 1.0
* on Monday, September 7, 2020 at 2:33:33 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/Search.framework/Search
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface SPDomainManager : NSObject
+(void)initialize;
+(id)defaultManager;
-(void)_removeAllDomainsForDisplayIdentifier:(id)arg1 ;
-(void)notifyIndexer;
-(id)getBundleIdForDomainNumber:(id)arg1 ;
-(void)registerApplication:(id)arg1 withCategories:(id)arg2 ;
-(void)applicationWasUninstalled:(id)arg1 ;
-(BOOL)siriSuggestionsEnabled;
@end


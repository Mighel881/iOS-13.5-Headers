/*
* This header is generated by classdump-dyld 1.0
* on Monday, September 7, 2020 at 2:36:13 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/DeviceCheckInternal.framework/DeviceCheckInternal
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface DCAssetFetcherContext : NSObject {

	BOOL _allowCatalogRefresh;
	BOOL _ignoreCachedMetadata;

}

@property (assign,nonatomic) BOOL allowCatalogRefresh;               //@synthesize allowCatalogRefresh=_allowCatalogRefresh - In the implementation block
@property (assign,nonatomic) BOOL ignoreCachedMetadata;              //@synthesize ignoreCachedMetadata=_ignoreCachedMetadata - In the implementation block
-(id)description;
-(BOOL)allowCatalogRefresh;
-(void)setAllowCatalogRefresh:(BOOL)arg1 ;
-(BOOL)ignoreCachedMetadata;
-(void)setIgnoreCachedMetadata:(BOOL)arg1 ;
@end

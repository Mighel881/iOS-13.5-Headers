/*
* This header is generated by classdump-dyld 1.0
* on Monday, September 7, 2020 at 2:32:48 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/PersonalizationPortrait.framework/PersonalizationPortrait
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class PPXPCClientHelper;

@interface PPInternalClient : NSObject {

	PPXPCClientHelper* _clientHelper;

}
+(id)sharedInstance;
-(id)init;
-(id)_synchronousRemoteObjectProxyWithErrorHandler:(/*^block*/id)arg1 ;
-(BOOL)setAssetMetadataRefreshIntervalSeconds:(double)arg1 error:(id*)arg2 ;
-(BOOL)clearAssetMetadataRefreshIntervalSecondsWithError:(id*)arg1 ;
-(double)assetMetadataRefreshIntervalSecondsWithError:(id*)arg1 ;
-(BOOL)downloadAssetMetadataWithError:(id*)arg1 ;
-(BOOL)setAssetDefaultBundleOverridePath:(id)arg1 assetIdentifier:(id)arg2 error:(id*)arg3 ;
-(id)assetDefaultBundleOverridePathForAssetIdentifier:(id)arg1 error:(id*)arg2 ;
-(id)assetVersionsWithError:(id*)arg1 ;
-(id)abGroupInfoWithError:(id*)arg1 ;
-(id)sysdiagnoseInformationWithError:(id*)arg1 ;
@end


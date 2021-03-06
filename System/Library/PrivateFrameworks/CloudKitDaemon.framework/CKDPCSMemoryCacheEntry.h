/*
* This header is generated by classdump-dyld 1.0
* on Monday, September 7, 2020 at 2:33:54 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class CKDPCSData;

@interface CKDPCSMemoryCacheEntry : NSObject {

	CKDPCSData* _pcsData;
	double _lastAccess;

}

@property (nonatomic,retain) CKDPCSData * pcsData;              //@synthesize pcsData=_pcsData - In the implementation block
@property (assign) double lastAccess;                           //@synthesize lastAccess=_lastAccess - In the implementation block
-(id)init;
-(id)description;
-(id)CKPropertiesDescription;
-(void)setLastAccess:(double)arg1 ;
-(double)lastAccess;
-(CKDPCSData *)pcsData;
-(void)setPcsData:(CKDPCSData *)arg1 ;
@end


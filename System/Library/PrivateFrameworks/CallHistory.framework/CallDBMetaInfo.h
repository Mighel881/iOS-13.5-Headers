/*
* This header is generated by classdump-dyld 1.0
* on Monday, September 7, 2020 at 2:33:32 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/CallHistory.framework/CallHistory
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSURL;

@interface CallDBMetaInfo : NSObject {

	NSURL* _dbInfoPrefFile;

}

@property (retain) NSURL * dbInfoPrefFile;              //@synthesize dbInfoPrefFile=_dbInfoPrefFile - In the implementation block
-(id)initWithURL:(id)arg1 ;
-(long long)readDatabaseVersion:(BOOL)arg1 ;
-(BOOL)validateInfo:(BOOL)arg1 ;
-(NSURL *)dbInfoPrefFile;
-(void)writeDatabaseVersion:(long long)arg1 isTemp:(BOOL)arg2 ;
-(void)setDbInfoPrefFile:(NSURL *)arg1 ;
@end


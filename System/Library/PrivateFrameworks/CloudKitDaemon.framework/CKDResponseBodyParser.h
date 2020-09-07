/*
* This header is generated by classdump-dyld 1.0
* on Monday, September 7, 2020 at 2:33:55 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
@class NSObject, NSMutableData, NSError;

@interface CKDResponseBodyParser : NSObject {

	NSObject*<OS_dispatch_queue> _parseQueue;
	NSMutableData* _parserData;
	NSError* _parserError;
	/*^block*/id _objectParsedBlock;
	long long _qualityOfService;

}

@property (nonatomic,retain) NSError * parserError;                                  //@synthesize parserError=_parserError - In the implementation block
@property (nonatomic,readonly) NSObject*<OS_dispatch_queue> parseQueue; 
@property (nonatomic,retain) NSMutableData * parserData; 
@property (assign,nonatomic) long long qualityOfService;                             //@synthesize qualityOfService=_qualityOfService - In the implementation block
@property (nonatomic,copy) id objectParsedBlock;                                     //@synthesize objectParsedBlock=_objectParsedBlock - In the implementation block
-(long long)qualityOfService;
-(void)setQualityOfService:(long long)arg1 ;
-(NSError *)parserError;
-(id)initWithQoS:(long long)arg1 ;
-(NSObject*<OS_dispatch_queue>)parseQueue;
-(void)setParserError:(NSError *)arg1 ;
-(void)processData:(id)arg1 ;
-(void)finishWithCompletion:(/*^block*/id)arg1 ;
-(void)setObjectParsedBlock:(id)arg1 ;
-(NSMutableData *)parserData;
-(void)setParserData:(NSMutableData *)arg1 ;
-(id)objectParsedBlock;
@end

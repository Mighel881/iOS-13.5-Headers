/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:47:26 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/FCAssetDataProvider.h>

@class NSData, NSString, FCInterestToken;

@interface FCANEFFileDataProvider : NSObject <FCAssetDataProvider> {

	NSString* _filePath;
	NSData* _wrappingKey;
	long long _options;
	FCInterestToken* _holdToken;

}

@property (nonatomic,copy,readonly) NSData * wrappingKey;                //@synthesize wrappingKey=_wrappingKey - In the implementation block
@property (nonatomic,readonly) long long options;                        //@synthesize options=_options - In the implementation block
@property (nonatomic,readonly) FCInterestToken * holdToken;              //@synthesize holdToken=_holdToken - In the implementation block
@property (nonatomic,readonly) NSData * data; 
@property (nonatomic,readonly) NSString * filePath;                      //@synthesize filePath=_filePath - In the implementation block
@property (nonatomic,readonly) BOOL isRawFileConsumable; 
-(long long)options;
-(NSData *)data;
-(NSString *)filePath;
-(FCInterestToken *)holdToken;
-(NSData *)wrappingKey;
-(BOOL)isRawFileConsumable;
-(id)initWithFilePath:(id)arg1 wrappingKey:(id)arg2 options:(long long)arg3 holdToken:(id)arg4 ;
@end


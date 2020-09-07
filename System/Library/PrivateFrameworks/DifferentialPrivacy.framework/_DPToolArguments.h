/*
* This header is generated by classdump-dyld 1.0
* on Monday, September 7, 2020 at 2:34:15 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/DifferentialPrivacy.framework/DifferentialPrivacy
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString;

@interface _DPToolArguments : NSObject {

	BOOL _verbose;
	BOOL _writeOK;
	NSString* _command;
	NSString* _arguments;
	NSString* _recordKey;
	NSString* _databasePath;

}

@property (nonatomic,copy,readonly) NSString * command;                   //@synthesize command=_command - In the implementation block
@property (nonatomic,copy,readonly) NSString * arguments;                 //@synthesize arguments=_arguments - In the implementation block
@property (nonatomic,copy,readonly) NSString * recordKey;                 //@synthesize recordKey=_recordKey - In the implementation block
@property (nonatomic,readonly) BOOL verbose;                              //@synthesize verbose=_verbose - In the implementation block
@property (nonatomic,copy,readonly) NSString * databasePath;              //@synthesize databasePath=_databasePath - In the implementation block
@property (nonatomic,readonly) BOOL writeOK;                              //@synthesize writeOK=_writeOK - In the implementation block
+(id)usage;
-(id)init;
-(id)description;
-(id)initWithDictionary:(id)arg1 ;
-(NSString *)arguments;
-(NSString *)databasePath;
-(NSString *)recordKey;
-(NSString *)command;
-(id)job;
-(BOOL)verbose;
-(BOOL)writeOK;
@end

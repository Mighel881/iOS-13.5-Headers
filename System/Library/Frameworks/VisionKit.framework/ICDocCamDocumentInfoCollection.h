/*
* This header is generated by classdump-dyld 1.0
* on Monday, September 7, 2020 at 2:35:54 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/Frameworks/VisionKit.framework/VisionKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString, NSDate, NSMutableArray;

@interface ICDocCamDocumentInfoCollection : NSObject {

	NSString* _title;
	NSDate* _creationDate;
	NSDate* _modificationDate;
	NSString* _uniqueIdentifier;
	NSMutableArray* _docInfos;

}

@property (nonatomic,readonly) long long docCamPDFVersion; 
@property (nonatomic,retain) NSString * title;                          //@synthesize title=_title - In the implementation block
@property (nonatomic,retain) NSDate * creationDate;                     //@synthesize creationDate=_creationDate - In the implementation block
@property (nonatomic,retain) NSDate * modificationDate;                 //@synthesize modificationDate=_modificationDate - In the implementation block
@property (nonatomic,retain) NSString * uniqueIdentifier;               //@synthesize uniqueIdentifier=_uniqueIdentifier - In the implementation block
@property (nonatomic,retain) NSMutableArray * docInfos;                 //@synthesize docInfos=_docInfos - In the implementation block
-(id)init;
-(NSString *)title;
-(void)setTitle:(NSString *)arg1 ;
-(NSString *)uniqueIdentifier;
-(NSDate *)modificationDate;
-(NSDate *)creationDate;
-(void)setCreationDate:(NSDate *)arg1 ;
-(void)setUniqueIdentifier:(NSString *)arg1 ;
-(void)setModificationDate:(NSDate *)arg1 ;
-(void)bumpModificationDate;
-(long long)docCamPDFVersion;
-(NSMutableArray *)docInfos;
-(void)setDocInfos:(NSMutableArray *)arg1 ;
@end


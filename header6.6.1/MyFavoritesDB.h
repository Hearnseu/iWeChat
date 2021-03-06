//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "MMDBRRepairerExt-Protocol.h"

@class NSString, WCTDatabase, WCTTable;

@interface MyFavoritesDB : NSObject <MMDBRRepairerExt>
{
    WCTDatabase *m_db;
    WCTTable *m_tableFavItem;
    WCTTable *m_tableCdnUpload;
    WCTTable *m_tableCdnDownload;
    WCTTable *m_tableFileRetainCount;
    WCTTable *m_tableSearch;
    WCTTable *m_tableTag;
}

@property(retain, nonatomic) WCTTable *m_tableTag; // @synthesize m_tableTag;
@property(retain, nonatomic) WCTTable *m_tableSearch; // @synthesize m_tableSearch;
@property(retain, nonatomic) WCTTable *m_tableFileRetainCount; // @synthesize m_tableFileRetainCount;
@property(retain, nonatomic) WCTTable *m_tableCdnDownload; // @synthesize m_tableCdnDownload;
@property(retain, nonatomic) WCTTable *m_tableCdnUpload; // @synthesize m_tableCdnUpload;
@property(retain, nonatomic) WCTTable *m_tableFavItem; // @synthesize m_tableFavItem;
@property(retain, nonatomic) WCTDatabase *m_db; // @synthesize m_db;
- (void).cxx_destruct;
- (id)internalCreateTable:(id)arg1 tableClass:(Class)arg2;
- (_Bool)createTables;
- (void)closeDBBeforeInit;
- (void)clearTables;
- (void)closeDB;
- (_Bool)runTransaction:(CDUnknownBlockType)arg1;
- (_Bool)runTransaction:(CDUnknownBlockType)arg1 event:(CDUnknownBlockType)arg2;
- (_Bool)initDB;
- (void)reloadDataBase;
- (void)dealloc;
- (id)init;
- (_Bool)deleteFavoritesItemByLocalItemId:(unsigned int)arg1;
- (_Bool)deleteFavoritesItemById:(unsigned int)arg1;
- (_Bool)updateItemXML:(id)arg1 ByLocalId:(unsigned int)arg2;
- (_Bool)updateItemLocalStatus:(int)arg1 ByLocalId:(unsigned int)arg2;
- (_Bool)updateItemUpdateTime:(unsigned int)arg1 ByLocalId:(unsigned int)arg2;
- (_Bool)updateUpdateSeq:(unsigned int)arg1 ByFavId:(unsigned int)arg2;
- (_Bool)updateItemInFavItemDBForFavObject:(id)arg1 ByFavId:(unsigned int)arg2;
- (_Bool)updateItemInFavItemDB:(id)arg1 ByLocalItemId:(unsigned int)arg2;
- (void)fillFavItemUpdatePropertiesForFavObject:(struct WCTPropertyList *)arg1;
- (void)fillFavItemUpdateProperties:(struct WCTPropertyList *)arg1;
- (unsigned int)getMaxLastUpdateTimeByUsrname:(id)arg1;
- (unsigned int)getItemCountByFromUsr:(id)arg1 andToUsr:(id)arg2;
- (unsigned int)getItemCountByUsrname:(id)arg1;
- (id)getNextPageFavoritesCapacityItemListBySize:(unsigned int)arg1;
- (id)getFirstPageFavoritesCapacityItemList;
- (id)getNextPageNeedBatchGetFavoritesItemListByType:(int)arg1 andMinUpdateTime:(unsigned int)arg2;
- (id)getFirstPageNeedBatchGetFavoritesItemListByType:(int)arg1;
- (id)getNeedBatchGetFavoritesItemListByType:(int)arg1 andMinUpdateTime:(unsigned int)arg2;
- (id)getNextPageFavoritesItemListByType:(int)arg1 andCurMinUpdateTime:(unsigned int)arg2;
- (id)getFirstPageFavoritesItemListContainUnBatchGet;
- (id)getFirstPageFavoritesItemListByType:(int)arg1;
- (id)getFavoritesItemListFrom:(unsigned int)arg1 Limit:(int)arg2;
- (id)getDeleteItemList;
- (id)getAllFavoritesItemList;
- (id)getDownloadFailedItemList;
- (id)getAsyncUploadFailedItemList;
- (id)getUploadFailedItemList;
- (id)getDownloadingItemList;
- (id)getAsyncUploadingItemList;
- (id)getUploadingItemList;
- (id)checkBeforeAddItemByFavId:(unsigned int)arg1 andLocalId:(unsigned int)arg2;
- (id)getLastUpdateFavoritesItem;
- (id)getLastFavoritesItem;
- (id)getFavoritesItemBySourceId:(id)arg1;
- (id)getFavoritesItemByLocalId:(unsigned int)arg1;
- (id)getFavoritesItemById:(unsigned int)arg1;
- (_Bool)insertNewRowInFavoritesItemTable:(id)arg1;
- (_Bool)deleteCdnInfoByFavoritesItemLocalIdIgnoringStatus:(unsigned int)arg1;
- (_Bool)deleteCdnInfoByFavoritesItemLocalId:(unsigned int)arg1;
- (_Bool)updateCdnInfo:(id)arg1 byItemLocalDataId:(id)arg2 andType:(int)arg3;
- (_Bool)updateCdnInfoByCheckItem:(id)arg1 HeadMd5:(id)arg2 FullMd5:(id)arg3;
- (_Bool)updateCdnInfo:(id)arg1 MD5:(id)arg2 Head256Md5:(id)arg3 Type:(int)arg4;
- (id)getNextAsyncUploadCdnInfoByLocalItemId:(unsigned int)arg1;
- (id)getNextUploadCdnInfoByLocalItemId:(unsigned int)arg1;
- (id)getUploadCdnInfoByLocalItemDataId:(id)arg1 andType:(int)arg2;
- (_Bool)insertNewRowInCdnInfoTable:(id)arg1;
- (_Bool)deleteDownloadCdnInfoByFavoritesItemLocalId:(unsigned int)arg1;
- (_Bool)updateDownloadCdnInfo:(id)arg1 byItemLocalDataId:(id)arg2 andType:(int)arg3;
- (id)getDownloadCdnInfoByLocalItemDataId:(id)arg1 andType:(int)arg2;
- (id)getNextDownloadCdnInfoByLocalItemId:(unsigned int)arg1;
- (_Bool)insertNewRowInDownloadCdnInfoTable:(id)arg1;
- (_Bool)deleteItemFromFavoritesFileRetainCountTableByMd5:(id)arg1 andLocalItemId:(unsigned int)arg2;
- (_Bool)insertNewRowInFileRetainCountTable:(id)arg1 ItemLocalId:(unsigned int)arg2;
- (_Bool)isMd5RetainCountZero:(id)arg1;
- (_Bool)isItemExist:(id)arg1 andLocalItemId:(unsigned int)arg2;
- (id)getSearchItemListByType:(int)arg1 SearchContent:(id)arg2;
- (_Bool)deleteSearchItemByLocalFavId:(unsigned int)arg1;
- (_Bool)insertOrUpdateFavSearchItem:(id)arg1;
- (void)willRepairDB:(unsigned int)arg1 needCatch:(_Bool *)arg2;
- (id)getTagItemListByTags:(id)arg1;
- (id)getTagsByLocalFavId:(unsigned int)arg1;
- (id)getDistinctTags;
- (_Bool)deleteTagsByLocalFavId:(unsigned int)arg1;
- (_Bool)insertItemTag:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


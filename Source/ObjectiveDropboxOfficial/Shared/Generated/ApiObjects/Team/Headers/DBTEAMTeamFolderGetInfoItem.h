///
/// Copyright (c) 2016 Dropbox, Inc. All rights reserved.
///
/// Auto-generated by Stone, do not modify.
///

#import <Foundation/Foundation.h>

#import "DBSerializableProtocol.h"

@class DBTEAMTeamFolderGetInfoItem;
@class DBTEAMTeamFolderMetadata;

NS_ASSUME_NONNULL_BEGIN

#pragma mark - API Object

///
/// The `TeamFolderGetInfoItem` union.
///
/// This class implements the `DBSerializable` protocol (serialize and
/// deserialize instance methods), which is required for all Obj-C SDK API route
/// objects.
///
@interface DBTEAMTeamFolderGetInfoItem : NSObject <DBSerializable, NSCopying>

#pragma mark - Instance fields

/// The `DBTEAMTeamFolderGetInfoItemTag` enum type represents the possible tag
/// states with which the `DBTEAMTeamFolderGetInfoItem` union can exist.
typedef NS_ENUM(NSInteger, DBTEAMTeamFolderGetInfoItemTag) {
  /// An ID that was provided as a parameter to `teamFolderGetInfo` did not
  /// match any of the team's team folders.
  DBTEAMTeamFolderGetInfoItemIdNotFound,

  /// Properties of a team folder.
  DBTEAMTeamFolderGetInfoItemTeamFolderMetadata,

};

/// Represents the union's current tag state.
@property (nonatomic, readonly) DBTEAMTeamFolderGetInfoItemTag tag;

/// An ID that was provided as a parameter to `teamFolderGetInfo` did not match
/// any of the team's team folders. @note Ensure the `isIdNotFound` method
/// returns true before accessing, otherwise a runtime exception will be raised.
@property (nonatomic, readonly, copy) NSString *idNotFound;

/// Properties of a team folder. @note Ensure the `isTeamFolderMetadata` method
/// returns true before accessing, otherwise a runtime exception will be raised.
@property (nonatomic, readonly) DBTEAMTeamFolderMetadata *teamFolderMetadata;

#pragma mark - Constructors

///
/// Initializes union class with tag state of "id_not_found".
///
/// Description of the "id_not_found" tag state: An ID that was provided as a
/// parameter to `teamFolderGetInfo` did not match any of the team's team
/// folders.
///
/// @param idNotFound An ID that was provided as a parameter to
/// `teamFolderGetInfo` did not match any of the team's team folders.
///
/// @return An initialized instance.
///
- (instancetype)initWithIdNotFound:(NSString *)idNotFound;

///
/// Initializes union class with tag state of "team_folder_metadata".
///
/// Description of the "team_folder_metadata" tag state: Properties of a team
/// folder.
///
/// @param teamFolderMetadata Properties of a team folder.
///
/// @return An initialized instance.
///
- (instancetype)initWithTeamFolderMetadata:(DBTEAMTeamFolderMetadata *)teamFolderMetadata;

- (instancetype)init NS_UNAVAILABLE;

#pragma mark - Tag state methods

///
/// Retrieves whether the union's current tag state has value "id_not_found".
///
/// @note Call this method and ensure it returns true before accessing the
/// `idNotFound` property, otherwise a runtime exception will be thrown.
///
/// @return Whether the union's current tag state has value "id_not_found".
///
- (BOOL)isIdNotFound;

///
/// Retrieves whether the union's current tag state has value
/// "team_folder_metadata".
///
/// @note Call this method and ensure it returns true before accessing the
/// `teamFolderMetadata` property, otherwise a runtime exception will be thrown.
///
/// @return Whether the union's current tag state has value
/// "team_folder_metadata".
///
- (BOOL)isTeamFolderMetadata;

///
/// Retrieves string value of union's current tag state.
///
/// @return A human-readable string representing the union's current tag state.
///
- (NSString *)tagName;

@end

#pragma mark - Serializer Object

///
/// The serialization class for the `DBTEAMTeamFolderGetInfoItem` union.
///
@interface DBTEAMTeamFolderGetInfoItemSerializer : NSObject

///
/// Serializes `DBTEAMTeamFolderGetInfoItem` instances.
///
/// @param instance An instance of the `DBTEAMTeamFolderGetInfoItem` API object.
///
/// @return A json-compatible dictionary representation of the
/// `DBTEAMTeamFolderGetInfoItem` API object.
///
+ (nullable NSDictionary<NSString *, id> *)serialize:(DBTEAMTeamFolderGetInfoItem *)instance;

///
/// Deserializes `DBTEAMTeamFolderGetInfoItem` instances.
///
/// @param dict A json-compatible dictionary representation of the
/// `DBTEAMTeamFolderGetInfoItem` API object.
///
/// @return An instantiation of the `DBTEAMTeamFolderGetInfoItem` object.
///
+ (DBTEAMTeamFolderGetInfoItem *)deserialize:(NSDictionary<NSString *, id> *)dict;

@end

NS_ASSUME_NONNULL_END

# Sorting Apartment Building

This C program is designed to sort apartment building data based on specific criteria.

## Requirements
- C compiler
- Cmake
- C99 and above

## Structure
#### META
Every META include nine fields:

| Type                    | Field name    | Descriction                                |
| ----------------------- | ------------- | ------------------------------------------ |
| char                    | name_builder  | Name of the construction company           |
| char                    | name_district | Building area name                         |
| type_t                  | type          | Type of building (Monolite, Bricks, Panel) |
| u_int<br>(unsigned int) | year_of_build | Year of building construction              |
| bool                    | is_lift       | Is there a lift in the building            |
| u_int<br>(unsigned int) | num_flat      | Number of apartments in the building       |
| u_int<br>(unsigned int) | num_floars    | Number of floors in the building           |
| float                   | averege_area  | The average room area in the building      |

##### Meta Example
> `Merkezi,Bethnal,BRICKS,2022,NO,638,58,14.74`

#### Container
The vector is used to support the following functions:
- Initialization
- Getting current size of the vector
- Getting data by index
- Resize vector
- Adding data in the end of vector
- Removing data from the end of vector
- Check is vector empty
-  Clearing

#### Sorting 

Order of fields:
>` name_builder -> name_district -> type -> year_of_build -> is_lift -> num_flat -> num_floars -> average_area`

Two types of sorting are supported:
- Buble sort
- Quick sort

## Usage

The program supports 4 launch types:
1. Generating random data `--generate` `-g`
2. Sort data in container (bublesort) `--sort` `-s`
3. Sort data in container (quicksort) `--quick` `-q`
4. Output to a fixed-width table `--print` `-p`
#### Flags

| Full Flag           | Short Flag | Description                                                        |
| ------------------- | ---------- | ------------------------------------------------------------------ |
| -\-help             | -h         | Show help bar                                                      |
| -\-generate=`N`     | -g `N`     | Generate `N` random buldings data                                  |
| -\-in=`File`        | -i `File`  | Input from a `File` (stdin by default)                             |
| -\-out=`File`       | -o `File`  | Output to a `File` (stdout by default)                             |
| -\-sort             | -s         | Sort the list using buble sort (ascending by default)              |
| -\-quick            | -q         | Sort the list using quick sort (ascending by default)              |
| -\-print            | -p         | Output to a fixed-width table                                      |
| -\-type=`asc(desc)` | -t `A(D)`  | Change the sorting mode (`A/asc - ascending, D/desc - descending`) |

## Building a project

###### `CMake`
With Cmake (CMakeLists.txt)
Link libraries: `vector`, `META`, `inputs`, `outputs`, `flags`, `generate`, `sorting`

## Example

#### File `input.csv`

```csv
BUILDER,DISTRICT,TYPE,YEAR,LIFT,NUM_FLAT,NUM_FLOARS,AVERAGE_AREA
Maire Tecnimont,Chadwell,PANEL,1588,YES,558,62,6.83
BUILD GODS,Clapham Crystal,PANEL,1998,NO,368,23,6.51
AlBawani,KONEVO,BRICKS,1576,NO,1350,75,10.11
Orion-Staete,Heath Chingford,PANEL,1679,NO,480,24,10.46
Kiewit Corp.,KONEVO,PANEL,1817,YES,284,71,6.74
Limak Holding,Green Brentford,MONOLITE,1700,YES,858,78,6.26
```

##### Command

```bash
lab.exe -i input.csv -s
```

#### Output (stdout)

```csv
BUILDER,DISTRICT,TYPE,YEAR,LIFT,NUM_FLAT,NUM_FLOARS,AVERAGE_AREA
AlBawani,KONEVO,BRICKS,1576,NO,1350,75,10.11
BUILD GODS,Clapham Crystal,PANEL,1998,NO,368,23,6.51
Kiewit Corp.,KONEVO,PANEL,1817,YES,284,71,6.74
Limak Holding,Green Brentford,MONOLITE,1700,YES,858,78,6.26   
Maire Tecnimont,Chadwell,PANEL,1588,YES,558,62,6.83
Orion-Staete,Heath Chingford,PANEL,1679,NO,480,24,10.46 
```

## License

Academic project. All rights reserved.   Not intended for redistribution or commercial use.
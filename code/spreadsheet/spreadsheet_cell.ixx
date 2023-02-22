export module spreadsheet_cell;
import <string>;
import <string_view>;

export class SpreadsheetCell {
public:
	SpreadsheetCell() = default;
	SpreadsheetCell(double initialValue);
	explicit SpreadsheetCell(std::string_view initialValue);
	SpreadsheetCell(const SpreadsheetCell& src);
	~SpreadsheetCell();

	SpreadsheetCell& operator=(const SpreadsheetCell& rhs) = default;

	void setValue(double value);
	double getValue() const;

	void setString(std::string_view value);
	std::string getString() const;

private:
	std::string doubleToString(double value) const;
	double stringToDouble(std::string_view value) const;
	double m_value { 0 };
};
<?php
/**
 * Implements hook_theme().
 */
function stockproducts_theme() {
  return array(
    'table' => array(
      'arguments' => array('header' => NULL, 'rows' => NULL),
    ),
  );
}

/**
 * Theme function to render a table.
 */
function theme_table($variables) {
  $header = $variables['header'];
  $rows = $variables['rows'];

  // Генерируем HTML-разметку для таблицы.
  $header_output = '<tr>';
  foreach ($header as $cell) {
    $header_output .= '<th>' . $cell . '</th>';
  }
  $header_output .= '</tr>';

  $rows_output = '';
  foreach ($rows as $row) {
    $rows_output .= '<tr>';
    foreach ($row['data'] as $cell) {
      $rows_output .= '<td>' . $cell . '</td>';
    }
    $rows_output .= '</tr>';
  }

  return '<table>' . $header_output . $rows_output . '</table>';
}
